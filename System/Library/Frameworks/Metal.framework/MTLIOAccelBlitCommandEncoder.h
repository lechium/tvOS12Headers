/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelBlitCommandEncoder : MTLIOAccelCommandEncoder
-(unsigned long long)getType;
-(void)synchronizeResource:(id)arg1 ;
-(void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)resetCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4 ;
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
@end

