//
//  PDPieceCell.h
//  PieceDiary
//
//  Created by moshuqi on 15/9/10.
//  Copyright (c) 2015年 msq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDPieceCell : UICollectionViewCell

- (void)setupWithQuestion:(NSString *)question answer:(NSString *)answer photos:(NSArray<UIImage *> *)photos;

@end
