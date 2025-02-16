import os

VariantDir('build', 'src')
GTEST_HOME = '/usr/local'
GTEST_INCLUDE = os.path.join(GTEST_HOME, 'include')

testEnv = Environment(
    ENV = os.environ,
    CCFLAGS='-ggdb -Wall -I %s' % (GTEST_INCLUDE), 
    CFLAGS='-fprofile-arcs -ftest-coverage',
    LINKFLAGS='-fprofile-arcs -ftest-coverage',
    LIBPATH=GTEST_HOME,
    LIBS=['pthread', 'libgtest']
)

sources = ['build/div.c']
testSources = ['build/div_test.cc']

testProg = testEnv.Program('a.out', sources + testSources)
testReport = testEnv.Command('test_report.xml', testProg, "./a.out --gtest_output=xml:${TARGET}")
coverageReport = testEnv.Command('cobertura.xml', testReport, "gcovr --cobertura-pretty --cobertura ${TARGET}")
Default(coverageReport)
