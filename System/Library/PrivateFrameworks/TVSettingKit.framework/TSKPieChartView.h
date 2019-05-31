/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSArray;

@interface TSKPieChartView : UIView {

	NSMutableDictionary* _valueDict;
	NSMutableDictionary* _colorDict;
	NSMutableDictionary* _slices;
	NSArray* _sliceIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * sliceIdentifiers;              //@synthesize sliceIdentifiers=_sliceIdentifiers - In the implementation block
-(void)_updateSlices:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sliceIdentifiers:(id)arg2 colors:(id)arg3 values:(id)arg4 ;
-(void)updateValues:(id)arg1 forSlicesWithIdentifiers:(id)arg2 animated:(BOOL)arg3 ;
-(NSArray *)sliceIdentifiers;
@end
