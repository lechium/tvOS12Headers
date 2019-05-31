/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSString, NSArray;

@interface OSLogMessagePlaceholder : NSObject {

	os_log_fmt_cspec_s* _placeholder;
	NSString* _placeholderString;
	NSArray* _placeholderTokens;

}

@property (nonatomic,readonly) NSString * rawString; 
@property (nonatomic,readonly) NSArray * tokens; 
@property (nonatomic,readonly) NSString * typeNamespace; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int precision; 
-(id)initWithPlaceholderStruct:(os_log_fmt_cspec_s*)arg1 ;
-(NSString *)rawString;
-(NSString *)typeNamespace;
-(int)precision;
-(void)dealloc;
-(NSString *)type;
-(int)width;
-(NSArray *)tokens;
@end

