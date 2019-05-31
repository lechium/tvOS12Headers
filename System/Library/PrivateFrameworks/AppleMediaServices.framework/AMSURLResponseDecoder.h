/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSResponseDecoding.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding> {

	NSIndexSet* _allowedStatusCodes;
	NSSet* _allowedContentTypes;

}

@property (nonatomic,copy) NSIndexSet * allowedStatusCodes;              //@synthesize allowedStatusCodes=_allowedStatusCodes - In the implementation block
@property (nonatomic,copy) NSSet * allowedContentTypes;                  //@synthesize allowedContentTypes=_allowedContentTypes - In the implementation block
-(NSSet *)allowedContentTypes;
-(id)resultFromResult:(id)arg1 error:(id*)arg2 ;
-(NSIndexSet *)allowedStatusCodes;
-(void)setAllowedStatusCodes:(NSIndexSet *)arg1 ;
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
-(id)init;
@end

