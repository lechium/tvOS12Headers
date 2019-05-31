/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKJSDOMDocumentAppBridgeInternal.h>
#import <libobjc.A.dylib/IKStyleMediaQueryEvaluator.h>

@protocol IKAppDocumentDelegate;
@class NSMutableDictionary, NSMapTable, IKAppContext, IKDOMDocument, NSString, IKHeadElement, IKViewElement, NSError, IKJSObject, IKViewElementStyleFactory, IKJSNavigationDocument;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator> {

	NSMutableDictionary* _mediaQueryCache;
	BOOL _parsingDOM;
	NSMapTable* _viewElementRegistry;
	BOOL _isViewElementRegistryDirty;
	BOOL _updated;
	BOOL _subtreeUpdated;
	IKAppContext* _appContext;
	IKDOMDocument* _jsDocument;
	NSString* _identifier;
	IKHeadElement* _headElement;
	IKViewElement* _navigationBarElement;
	IKViewElement* _toolbarElement;
	IKViewElement* _templateElement;
	NSError* _error;
	id<IKAppDocumentDelegate> _delegate;
	double _impressionThreshold;
	NSMutableDictionary* _impressions;
	IKJSObject* _owner;
	IKViewElementStyleFactory* _styleFactory;

}

@property (retain) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) IKViewElement * templateElement;                                             //@synthesize templateElement=_templateElement - In the implementation block
@property (retain) IKViewElement * navigationBarElement;                                        //@synthesize navigationBarElement=_navigationBarElement - In the implementation block
@property (retain) IKViewElement * toolbarElement;                                              //@synthesize toolbarElement=_toolbarElement - In the implementation block
@property (retain) IKHeadElement * headElement;                                                 //@synthesize headElement=_headElement - In the implementation block
@property (nonatomic,retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                     //@synthesize updated=_updated - In the implementation block
@property (getter=isSubtreeUpdated) BOOL subtreeUpdated;                                        //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (assign,nonatomic) double impressionThreshold;                                        //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * impressions;                                 //@synthesize impressions=_impressions - In the implementation block
@property (__weak,readonly) IKAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) id<IKNetworkRequestLoader> requestLoader; 
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,__weak,readonly) IKDOMDocument * jsDocument;                               //@synthesize jsDocument=_jsDocument - In the implementation block
@property (nonatomic,__weak,readonly) IKJSObject * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;                          //@synthesize styleFactory=_styleFactory - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppDocumentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)impressions;
-(void)setImpressions:(NSMutableDictionary *)arg1 ;
-(void)scrollToTop;
-(BOOL)isUpdated;
-(IKDOMDocument *)jsDocument;
-(void)_updateWithXML:(id)arg1 ;
-(IKJSNavigationDocument *)navigationDocument;
-(void)onImpressionsChange:(id)arg1 ;
-(void)_setViewElementStylesDirtyForced:(BOOL)arg1 ;
-(id)recordedImpressions:(BOOL)arg1 ;
-(id)impressionsMatching:(id)arg1 reset:(BOOL)arg2 ;
-(id)_viewElementForNodeID:(unsigned long long)arg1 ;
-(IKHeadElement *)headElement;
-(IKViewElement *)navigationBarElement;
-(IKViewElement *)toolbarElement;
-(IKViewElementStyleFactory *)styleFactory;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(void)setHeadElement:(IKHeadElement *)arg1 ;
-(void)setNavigationBarElement:(IKViewElement *)arg1 ;
-(void)setToolbarElement:(IKViewElement *)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(void)setImpressionThreshold:(double)arg1 ;
-(BOOL)_clearUpdatesForElement:(id)arg1 ;
-(void)updateForDocument:(id)arg1 ;
-(void)setNeedsUpdateForDocument:(id)arg1 ;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)runTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)_isUpdateAllowed;
-(BOOL)evaluateStyleMediaQueryList:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3 ;
-(void)onNeedsUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)onViewAttributesChangeWithArguments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2 ;
-(id)viewElementForNodeID:(unsigned long long)arg1 ;
-(IKViewElement *)templateElement;
-(id<IKNetworkRequestLoader>)requestLoader;
-(void)setViewElementStylesDirty;
-(IKAppContext *)appContext;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(double)impressionThreshold;
-(void)recordImpressionsForViewElements:(id)arg1 ;
-(void)onLoad;
-(void)onAppear;
-(void)onDisappear;
-(void)onUnload;
-(BOOL)isSubtreeUpdated;
-(void)onUpdate;
-(void)onPerformanceMetricsChange:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)debugDescription;
-(void)setDelegate:(id<IKAppDocumentDelegate>)arg1 ;
-(id<IKAppDocumentDelegate>)delegate;
-(void)setIdentifier:(NSString *)arg1 ;
-(IKJSObject *)owner;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

