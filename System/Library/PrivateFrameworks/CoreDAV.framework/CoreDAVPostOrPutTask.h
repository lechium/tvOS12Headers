/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {

	BOOL _forceToServer;
	NSString* _previousETag;
	NSString* _requestDataContentType;
	NSData* _requestDataPayload;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSString * requestDataContentType;              //@synthesize requestDataContentType=_requestDataContentType - In the implementation block
@property (nonatomic,retain) NSData * requestDataPayload;                    //@synthesize requestDataPayload=_requestDataPayload - In the implementation block
@property (assign,nonatomic) BOOL forceToServer;                             //@synthesize forceToServer=_forceToServer - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;                        //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                        //@synthesize previousETag=_previousETag - In the implementation block
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSString *)requestDataContentType;
-(void)setRequestDataContentType:(NSString *)arg1 ;
-(void)setRequestDataPayload:(NSData *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)requestBody;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(BOOL)forceToServer;
-(void)setForceToServer:(BOOL)arg1 ;
-(NSData *)requestDataPayload;
-(id)additionalHeaderValues;
-(id)description;
-(id)initWithURL:(id)arg1 ;
@end

