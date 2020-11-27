//
//  Data.h
//  DictToModelDemo
//
//  Created by wjx on 2020/11/26.
//  Copyright © 2020 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Userinfo.h"
NS_ASSUME_NONNULL_BEGIN

@interface Data : NSObject
@property (nonatomic, strong) Userinfo *userinfo;
@property (nonatomic, strong) NSString *token;
@end

NS_ASSUME_NONNULL_END
