/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCaptureSessionObserver <NSObject>
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
@required
-(void)captureSessionDidStart:(id)arg1;
-(void)captureSessionDidStop:(long long)arg1;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;

@end

