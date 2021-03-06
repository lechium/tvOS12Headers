/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {

	AVRouteDetectorInternal* _routeDetectorInternal;

}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; 
@property (readonly) BOOL multipleRoutesDetected; 
+(void)initialize;
-(BOOL)multipleRoutesDetected;
-(void)_updateMultipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

