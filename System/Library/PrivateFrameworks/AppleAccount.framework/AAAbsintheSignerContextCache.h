/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, AAAbsintheContext;

@interface AAAbsintheSignerContextCache : NSObject {

	NSDate* _creationDate;
	AAAbsintheContext* _context;

}

@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context;              //@synthesize context=_context - In the implementation block
+(id)cacheWithContext:(id)arg1 ;
-(NSDate *)creationDate;
-(id)init;
-(AAAbsintheContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

