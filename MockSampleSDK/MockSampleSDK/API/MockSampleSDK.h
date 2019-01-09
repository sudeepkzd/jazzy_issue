//
//  MockSampleSDK.h
//  MockSampleSDK
//
//  Created by Sudeep Kumar on 08/01/19.
//  Copyright © 2019 Sudeep Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SampleSDK/SampleTypes.h>

#import "MockEvent.h"

/**
 * Mock Sample SDK
 */
@interface MockSampleSDK : NSObject

/**
 * GEts a sample types
 */
- (SampleTypes *)getMockSampleTypes;

/**
 * returns a mock event
 */
- (MockEvent *)getMockEvent;

@end
