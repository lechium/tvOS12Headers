/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_browser;
@class NWBrowseDescriptor, NWParameters, NSObject, NSSet;

@interface NWBrowser : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSObject*<OS_nw_browser> _internalBrowser;
	NSSet* _internalDiscoveredEndpoints;

}

@property (readonly) NSObject*<OS_nw_browser> internalBrowser;              //@synthesize internalBrowser=_internalBrowser - In the implementation block
@property (retain) NSSet * internalDiscoveredEndpoints;                     //@synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints - In the implementation block
@property (readonly) NWBrowseDescriptor * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) NWParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredEndpoints; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSSet *)discoveredEndpoints;
-(void)setUpdateHandler;
-(id)initWithDescriptor:(id)arg1 parameters:(id)arg2 ;
-(id)copyDiscoveredEndpoints;
-(NSObject*<OS_nw_browser>)internalBrowser;
-(NSSet *)internalDiscoveredEndpoints;
-(void)setInternalDiscoveredEndpoints:(NSSet *)arg1 ;
-(void)dealloc;
-(NWBrowseDescriptor *)descriptor;
-(void)cancel;
-(NWParameters *)parameters;
@end

