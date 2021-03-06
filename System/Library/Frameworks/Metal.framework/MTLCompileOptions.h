/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (assign,nonatomic) BOOL tracingEnabled; 
@property (assign,nonatomic) BOOL glBufferBindPoints; 
@property (assign,nonatomic) BOOL debuggingEnabled; 
@property (assign,nonatomic) BOOL compileTimeStatisticsEnabled; 
@property (assign,nonatomic) NSString * additionalCompilerArguments; 
@property (nonatomic,copy) NSDictionary * preprocessorMacros; 
@property (assign,nonatomic) BOOL fastMathEnabled; 
@property (assign,nonatomic) unsigned long long languageVersion; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

