/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSData;

@interface CTMessagePart : NSObject {

	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	NSString* _contentId;
	NSString* _contentLocation;
	NSData* _data;

}

@property (nonatomic,copy) NSString * contentType;                  //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * contentId;                    //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentLocation;
-(NSString *)contentType;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

