/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLMenuHeaderView.h>

@class _TVLSegmentedControl, NSArray;

@interface TVLTabHeaderView : TVLMenuHeaderView {

	_TVLSegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) _TVLSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSArray * tabTitles; 
@property (assign,nonatomic) long long selectedIndex; 
-(id)initWithHeaderElement:(id)arg1 ;
-(void)setTabTitles:(NSArray *)arg1 ;
-(NSArray *)tabTitles;
-(void)layoutSubviews;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(_TVLSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(_TVLSegmentedControl *)arg1 ;
@end
