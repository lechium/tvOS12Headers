/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLPipelineCache.h>

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache> {

	BOOL _writable;
	MTLCompilerCache* _compilerCache;
	BOOL _disableRunTimeCompilation;

}

@property (readonly) BOOL writable;                                 //@synthesize writable=_writable - In the implementation block
@property (readonly) MTLCompilerCache* cache;                       //@synthesize compilerCache=_compilerCache - In the implementation block
@property (assign) BOOL disableRunTimeCompilation;                  //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const MTLTargetDeviceArch*)arg3 ;
-(BOOL)disableRunTimeCompilation;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(BOOL)writable;
-(void)write;
-(void)dealloc;
-(MTLCompilerCache*)cache;
@end

