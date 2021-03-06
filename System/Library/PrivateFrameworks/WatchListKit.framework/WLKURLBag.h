/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBag;

@interface WLKURLBag : NSObject {

	SSURLBag* _impl;

}
+(id)URLBagForContext:(id)arg1 ;
-(id)URLBagContext;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(id)existingBagDictionary;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invalidate;
@end

