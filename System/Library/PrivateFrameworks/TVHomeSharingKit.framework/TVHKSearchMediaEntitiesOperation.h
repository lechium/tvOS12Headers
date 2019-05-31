/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityServerOperation.h>

@class TVHKMediaEntitySearchResponse, TVHKMediaEntitySearchRequest;

@interface TVHKSearchMediaEntitiesOperation : TVHKMediaEntityServerOperation {

	TVHKMediaEntitySearchResponse* _response;
	TVHKMediaEntitySearchRequest* _request;

}

@property (nonatomic,retain) TVHKMediaEntitySearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) TVHKMediaEntitySearchRequest * request;                  //@synthesize request=_request - In the implementation block
-(void)setRequest:(TVHKMediaEntitySearchRequest *)arg1 ;
-(void)setResponse:(TVHKMediaEntitySearchResponse *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaEntityServer:(id)arg1 request:(id)arg2 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(TVHKMediaEntitySearchRequest *)request;
-(TVHKMediaEntitySearchResponse *)response;
@end
