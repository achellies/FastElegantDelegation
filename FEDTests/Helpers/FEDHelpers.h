//
//  FEDHelpers.h
//  FEDelegation
//
//  Created by Yan Rabovik on 17.04.13.
//  Copyright (c) 2013 Yan Rabovik. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FEDExampleProtocol <NSObject>
@optional
-(void)method;
-(void)methodWithArgument:(id)arg;
-(void)methodWithFloat:(float)floatArg;
@end

@interface FEDExampleDelegate : NSObject<FEDExampleProtocol>
@end