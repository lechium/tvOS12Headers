/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;              //@synthesize inactiveLines=_inactiveLines - In the implementation block
-(void)_setNeedsBuildRows;
-(void)_buildRows;
-(id)_pagingFilter;
-(NSArray *)inactiveLines;
-(id)init;
@end

