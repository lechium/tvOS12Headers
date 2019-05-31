/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOETARequest, NSString;

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOETARequest* _request;
	int _mode;

}

@property (nonatomic,retain) GEOETARequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) int mode;                              //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
+(BOOL)supportsSecureCoding;
-(void)setRequest:(GEOETARequest *)arg1 ;
-(BOOL)expectsReply;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)mode;
-(GEOETARequest *)request;
-(void)setMode:(int)arg1 ;
-(BOOL)isValid;
@end

