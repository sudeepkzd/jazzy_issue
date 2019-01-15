//
//  MockSampleSDK.m
//  MockSampleSDK
//
//  Created by Sudeep Kumar on 08/01/19.
//  Copyright © 2019 Sudeep Kumar. All rights reserved.
//

#import "MockSampleSDK.h"

@implementation MockSampleSDK

- (SampleTypes *)getMockSampleTypes {
    return [[SampleTypes alloc] init];
}

- (MockEvent *)getMockEvent {
    return [[MockEvent alloc] init];
}

- (void)acknowledgeEnum:(GreetingEnum)greetingEnum {
    //nothing
}

@end
