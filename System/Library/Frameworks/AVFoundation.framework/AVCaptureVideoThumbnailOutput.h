/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {

	AVCaptureVideoThumbnailOutputInternal* _internal;

}

@property (assign,nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate; 
@property (nonatomic,copy) NSArray * filters; 
@property (assign,nonatomic) CGSize thumbnailSize; 
+(CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(CGSize)arg2 filterCount:(unsigned long long)arg3 ;
+(void)initialize;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setThumbnailContentsDelegate:(id<AVCaptureVideoThumbnailContentsDelegate>)arg1 ;
-(id<AVCaptureVideoThumbnailContentsDelegate>)thumbnailContentsDelegate;
-(id)connectionMediaTypes;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
@end

