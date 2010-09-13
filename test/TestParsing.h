//
//  TestParsing.h
//  YAMLKit
//
//  Created by Patrick Thomson on 12/29/08.
//

#import <SenTestingKit/SenTestingKit.h>
#import <YAMLKit/YAMLKit.h>

@interface TestParsing : SenTestCase {
    YKParser *p;
}

- (void)testVerySimpleLoadingFromFile;
- (void)testVerySimpleStringParsing;
- (void)testModerateLoadingFromFile;
- (void)testAutomaticIntegerCasting;
- (void)testAutomaticBooleanCasting;
- (void)testWithNonexistentFile;
//- (void)testWithMalformedStringInput;
//- (void)testSuccessfulLoadingUsingErrors;
//- (void)testUnsuccessfulLoadingUsingErrors;
//- (void)testWhatHappensWhenParseIsCalledTwice;
//- (void)testDifferentEncodings;
//- (void)testWithCustomInputHandler;

@end
