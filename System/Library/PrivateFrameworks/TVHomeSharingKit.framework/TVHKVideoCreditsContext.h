/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKStoreVideoCreditsOperation, NSMutableArray;

@interface TVHKVideoCreditsContext : NSObject {

	TVHKStoreVideoCreditsOperation* _operation;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) TVHKStoreVideoCreditsOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                               //@synthesize requests=_requests - In the implementation block
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setOperation:(TVHKStoreVideoCreditsOperation *)arg1 ;
-(TVHKStoreVideoCreditsOperation *)operation;
@end

