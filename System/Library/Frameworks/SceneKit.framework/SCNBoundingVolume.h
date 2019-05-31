/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNBoundingVolume <NSObject>
@required
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;

@end
