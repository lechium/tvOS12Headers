/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(void)setDisplayScale:(double)arg1 ;
-(id)imageForBorderConfiguration:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)_borderView;
-(id)init;
-(void)dealloc;
-(double)displayScale;
-(void)_invalidate;
@end

