/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVResponseBodyParser <NSObject>
@property (readonly) NSError * parserError; 
@optional
+(BOOL)canHandleContentType:(id)arg1;

@required
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2;

@end

