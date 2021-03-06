/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVColumnRowView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLTableElement, TVLColumnRowViewDataSource, TVLColumnRowViewDelegate;

@interface TVLColumnRowView : TVColumnRowView <ATVUpdatable> {

	TVLTableElement* _tableElement;
	TVLColumnRowViewDataSource* _builtinDataSource;
	TVLColumnRowViewDelegate* _builtinDelegate;

}
-(id)initWithTableElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)dealloc;
@end

