/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoCaptureProtocol
@optional
-(unsigned)previewSlot;
-(BOOL)setAnimoji:(id)arg1;
-(BOOL)setMemoji:(id)arg1;
-(void)addStickerWithURL:(id)arg1 atPosition:(CGPoint)arg2 identifier:(id)arg3;

@required
-(int)stop:(BOOL)arg1;
-(int)setFrameRate:(int)arg1;
-(BOOL)isFrontCamera;
-(int)startPreview;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const *)arg1;
-(BOOL)isPreviewRunning;
-(int)setCameraWithUID:(id)arg1;
-(id)getCameraUID;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;

@end

