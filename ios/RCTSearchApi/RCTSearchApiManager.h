//
//  RCTSearchApiManager.h
//  RCTSearchApi
//
//  Created by Daniil Konoplev on 17/11/2016.
//  Copyright © 2016 Ombori AB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTEventEmitter.h"

@interface RCTSearchApiManager : RCTEventEmitter

+ (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *))restorationHandler;

@end
