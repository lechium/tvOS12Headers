/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class SiriUIPlatterSectionHeaderView, NSString;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {

	SiriUIPlatterSectionHeaderView* _headerView;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 ;
+(id)_font;
-(void)setText:(NSString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)prepareForReuse;
-(long long)textAlignment;
-(id)initWithText:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

