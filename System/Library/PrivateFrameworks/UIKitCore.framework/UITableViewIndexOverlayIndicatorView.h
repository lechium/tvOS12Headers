/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UITapGestureRecognizer, UITableView, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITableView* _table;

}

@property (nonatomic,copy) NSString * currentText; 
-(void)layoutSubviews;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)_tapGestureChanged:(id)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(void)_invalidateTable;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
@end
