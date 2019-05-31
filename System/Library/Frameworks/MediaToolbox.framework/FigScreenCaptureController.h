/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigScreenCaptureFrameHandlerDelegate;
#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigScreenCaptureController : NSObject {

	id<FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueFigSimpleMutexRef _lock;
	CGSize _size;
	SCD_Struct_Fi7 _minIntervalBetweenFrames;

}

@property (assign,nonatomic) OpaqueFigVirtualDisplaySessionRef session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) OpaqueFigSimpleMutexRef lock;                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi7 minIntervalBetweenFrames;                               //@synthesize minIntervalBetweenFrames=_minIntervalBetweenFrames - In the implementation block
@property (assign,nonatomic,__weak) id<FigScreenCaptureFrameHandlerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
+(id)screenCaptureControllerWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi7)arg2 ;
-(void)startCapture;
-(id)initWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi7)arg2 ;
-(void)didReceiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 destRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(SCD_Struct_Fi7)minIntervalBetweenFrames;
-(void)setMinIntervalBetweenFrames:(SCD_Struct_Fi7)arg1 ;
-(void)setSession:(OpaqueFigVirtualDisplaySessionRef)arg1 ;
-(OpaqueFigVirtualDisplaySessionRef)session;
-(void)stopCapture;
-(void)setLock:(OpaqueFigSimpleMutexRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setDelegate:(id<FigScreenCaptureFrameHandlerDelegate>)arg1 ;
-(id<FigScreenCaptureFrameHandlerDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(OpaqueFigSimpleMutexRef)lock;
@end

