/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableSet, NSString, NSArray;

@interface IKXMLErrorHandlerContext : NSObject {

	NSMutableString* _mutableErrorMessages;
	NSMutableSet* _mutableParserErrors;

}

@property (nonatomic,retain) NSMutableString * mutableErrorMessages;              //@synthesize mutableErrorMessages=_mutableErrorMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableParserErrors;                  //@synthesize mutableParserErrors=_mutableParserErrors - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) NSArray * parserErrors; 
-(NSString *)errorMessage;
-(NSArray *)parserErrors;
-(NSMutableString *)mutableErrorMessages;
-(NSMutableSet *)mutableParserErrors;
-(void)setMutableErrorMessages:(NSMutableString *)arg1 ;
-(void)setMutableParserErrors:(NSMutableSet *)arg1 ;
-(id)init;
-(void)clear;
@end
