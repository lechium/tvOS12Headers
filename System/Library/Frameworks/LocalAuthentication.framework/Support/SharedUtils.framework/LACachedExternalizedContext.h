/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;
@class NSData;

@interface LACachedExternalizedContext : NSObject {

	id<LAContextExternalizationProt> _externalizationDelegate;
	NSData* _cachedExternalizedContext;
	id<LAContextExternalizationObserverProt> _externalizationObserver;

}

@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<LAContextExternalizationObserverProt> externalizationObserver;              //@synthesize externalizationObserver=_externalizationObserver - In the implementation block
-(id)externalizedContextWithError:(id*)arg1 ;
-(id<LAContextExternalizationObserverProt>)externalizationObserver;
-(void)setExternalizationObserver:(id<LAContextExternalizationObserverProt>)arg1 ;
-(id)initWithExternalizationDelegate:(id)arg1 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(NSData *)externalizedContext;
@end

