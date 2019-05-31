/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSDocumentLoader, NSDictionary, TVSStoreFrontLocale, NSArray, NSString;

@interface TVSStoreFront : NSObject {

	TVSDocumentLoader* _availableSFDocument;
	BOOL _changingStoreFront;
	BOOL _loadAvailableStoreFrontsChangedLocale;
	NSDictionary* _storeFrontDictionary;
	TVSStoreFrontLocale* _locale;
	NSDictionary* _availableStoreFronts;
	unsigned long long _loadStoreFrontRetryAttempt;
	unsigned long long _loadAvailableStoreFrontRetryAttempt;

}

@property (retain) TVSStoreFrontLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (retain) NSDictionary * availableStoreFronts;                                 //@synthesize availableStoreFronts=_availableStoreFronts - In the implementation block
@property (retain) NSDictionary * storeFrontDictionary;                                 //@synthesize storeFrontDictionary=_storeFrontDictionary - In the implementation block
@property (getter=isChangingStoreFront) BOOL changingStoreFront;                        //@synthesize changingStoreFront=_changingStoreFront - In the implementation block
@property (assign) BOOL loadAvailableStoreFrontsChangedLocale;                          //@synthesize loadAvailableStoreFrontsChangedLocale=_loadAvailableStoreFrontsChangedLocale - In the implementation block
@property (assign) unsigned long long loadStoreFrontRetryAttempt;                       //@synthesize loadStoreFrontRetryAttempt=_loadStoreFrontRetryAttempt - In the implementation block
@property (assign) unsigned long long loadAvailableStoreFrontRetryAttempt;              //@synthesize loadAvailableStoreFrontRetryAttempt=_loadAvailableStoreFrontRetryAttempt - In the implementation block
@property (retain,readonly) NSArray * menuDefinitions; 
@property (retain,readonly) NSArray * vendorBags; 
@property (retain,readonly) NSString * localizedDescription; 
+(id)allLanguages;
+(BOOL)_switchToStoreFrontWithLocale:(id)arg1 force:(BOOL)arg2 ;
+(BOOL)switchToStoreFrontWithLocale:(id)arg1 ;
+(id)availableLocales;
+(void)initialize;
+(id)sharedInstance;
+(void)connect;
-(id)allLanguages;
-(id)initInstance;
-(void)_retry:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(void)_loadAvailableStoreFronts;
-(void)_handleSystemLanguageUpdated;
-(BOOL)loadAvailableStoreFrontsChangedLocale;
-(void)setLoadAvailableStoreFrontsChangedLocale:(BOOL)arg1 ;
-(NSArray *)menuDefinitions;
-(id)valueForStoreFrontKey:(id)arg1 ;
-(void)setChangingStoreFront:(BOOL)arg1 ;
-(void)_updateDateAndTimeFromURLResponse:(id)arg1 ;
-(void)_updateDateAndTimeFromNonTLSSource;
-(void)setLoadAvailableStoreFrontRetryAttempt:(unsigned long long)arg1 ;
-(void)setAvailableStoreFronts:(NSDictionary *)arg1 ;
-(void)_inspectCurrentStoreFront;
-(void)_loadStoreFront;
-(unsigned long long)loadAvailableStoreFrontRetryAttempt;
-(NSDictionary *)availableStoreFronts;
-(void)setLoadStoreFrontRetryAttempt:(unsigned long long)arg1 ;
-(void)setStoreFrontDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)loadStoreFrontRetryAttempt;
-(BOOL)_validateCoreTimeEntitlement;
-(BOOL)_extractDateString:(id*)arg1 fromStoreResponse:(id)arg2 ;
-(BOOL)_extractDate:(id*)arg1 fromString:(id)arg2 ;
-(BOOL)isChangingStoreFront;
-(NSDictionary *)storeFrontDictionary;
-(id)menuDefinitionForMediaType:(id)arg1 ;
-(NSArray *)vendorBags;
-(void)_urlBagLoaded:(id)arg1 ;
-(id)availableLocales;
-(void)dealloc;
-(NSString *)localizedDescription;
-(void)setLocale:(TVSStoreFrontLocale *)arg1 ;
-(TVSStoreFrontLocale *)locale;
@end

