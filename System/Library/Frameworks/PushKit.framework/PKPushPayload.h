/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PKPushPayload : NSObject {

	NSString* _type;
	NSDictionary* _dictionaryPayload;

}

@property (copy) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * dictionaryPayload;              //@synthesize dictionaryPayload=_dictionaryPayload - In the implementation block
-(void)setDictionaryPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryPayload;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

