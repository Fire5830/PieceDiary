//
//  PDPieceCellData.h
//  PieceDiary
//
//  Created by moshuqi on 15/9/17.
//  Copyright (c) 2015年 msq. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PDPhotoData;

@interface PDPieceCellData : NSObject

// 日记界面每个cell包含的数据
@property (nonatomic, retain) NSString *question;
@property (nonatomic, retain) NSString *answer;
@property (nonatomic, retain) NSArray<PDPhotoData *> *photoDatas;

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, assign) NSInteger questionID;

@end
