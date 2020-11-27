//
//  Status.h
//  DictToModelDemo
//
//  Created by ChenMan on 2018/5/8.
//  Copyright © 2018年 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+EnumArr.h"
#import "NSObject+EnumDict.h"
#import "Data.h"
@class PersonModel;
@class Data;
@interface Status : NSObject <ModelDelegate>

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) Data *data;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *status;

@property (nonatomic, strong) PersonModel *person;

@property (nonatomic, strong) NSArray *cellMdlArr;

+ (NSDictionary *)dictWithModelClass;

@end
