/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(void)finalize;
-(id)_weakReference;
-(BOOL)suppressesPlayerRendering;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(SCD_Struct_AV5)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_AV5)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

