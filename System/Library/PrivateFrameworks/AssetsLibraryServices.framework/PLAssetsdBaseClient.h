/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLXPCProxyCreating;
@interface PLAssetsdBaseClient : NSObject {

	id<PLXPCProxyCreating> _proxyFactory;

}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
-(id<PLXPCProxyCreating>)proxyFactory;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
@end

