//
//  SampleTypes.h
//  SampleSDK
//
//  Created by Sudeep Kumar on 08/01/19.
//  Copyright © 2019 Sudeep Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Enum for greeting people
 */
typedef NS_ENUM(int, GreetingEnum) {
    Hello = 0,
    Bye = 1
};

@interface SampleTypes : NSObject

- (NSArray *)getSampleTypes;

@end
