/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol TVJSSearchContentItem <JSExport>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * UTSContentType; 
@property (nonatomic,copy,readonly) NSString * URLFormatString; 
@property (nonatomic,copy,readonly) NSNumber * imageHeight; 
@property (nonatomic,copy,readonly) NSNumber * imageWidth; 
@property (nonatomic,copy,readonly) NSString * imagesJSONContentPayload; 
@property (nonatomic,readonly) BOOL isEvod; 
@required
-(BOOL)isEvod;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(NSString *)UTSContentType;
-(NSString *)URLFormatString;
-(NSString *)imagesJSONContentPayload;
-(NSString *)subtitle;

@end

