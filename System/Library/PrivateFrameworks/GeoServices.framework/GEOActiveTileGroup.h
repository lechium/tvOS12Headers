/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray, GEODataSetDescription, NSData, GEOURLInfoSet, GEOVersionManifest;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	SCD_Struct_GE2* _activeScales;
	SCD_Struct_GE2* _activeScenarios;
	NSString* _abExperimentURLLegacy;
	NSMutableArray* _activeResources;
	NSString* _addressCorrectionInitURLLegacy;
	NSString* _addressCorrectionUpdateURLLegacy;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURLLegacy;
	NSMutableArray* _attributions;
	NSString* _backgroundDispatcherURLLegacy;
	NSString* _backgroundRevGeoURLLegacy;
	NSString* _batchReverseGeocoderURLLegacy;
	NSString* _batchTrafficProbeURLLegacy;
	NSString* _bluePOIURLLegacy;
	NSString* _businessPortalBaseURLLegacy;
	GEODataSetDescription* _dataSet;
	NSString* _directionsURLLegacy;
	NSString* _dispatcherURLLegacy;
	NSString* _etaURLLegacy;
	NSData* _flyoverRegionVersions;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _identifier;
	NSMutableArray* _locationShiftEnabledRegions;
	unsigned _locationShiftVersion;
	NSString* _logMessageUsageURLLegacy;
	NSString* _logMessageUsageV3URLLegacy;
	unsigned _modelVersion;
	NSString* _polyLocationShiftURLLegacy;
	NSString* _proactiveRoutingURLLegacy;
	NSString* _problemCategoriesURLLegacy;
	NSString* _problemOptInURLLegacy;
	NSString* _problemStatusURLLegacy;
	NSString* _problemSubmissionURLLegacy;
	NSString* _realtimeTrafficProbeURLLegacy;
	NSMutableArray* _regionalResourceRegions;
	NSMutableArray* _regionalResourceTiles;
	NSMutableArray* _regionalResources;
	NSString* _regionalResourcesURLLegacy;
	NSString* _releaseInfo;
	NSData* _reserved;
	NSMutableArray* _resources;
	NSString* _resourcesURLLegacy;
	NSString* _reverseGeocoderVersionsURLLegacy;
	NSString* _searchAttributionManifestURLLegacy;
	NSString* _simpleETAURLLegacy;
	NSString* _spatialLookupURLLegacy;
	NSMutableArray* _staleResources;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileSets;
	NSString* _uniqueIdentifier;
	GEOURLInfoSet* _urlInfoSet;
	GEOVersionManifest* _versionManifest;
	NSString* _wifiConnectionQualityProbeURLLegacy;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) unsigned identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                       //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                                      //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                   //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceTiles;                          //@synthesize regionalResourceTiles=_regionalResourceTiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceRegions;                        //@synthesize regionalResourceRegions=_regionalResourceRegions - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionalResourcesURLLegacy; 
@property (nonatomic,retain) NSString * regionalResourcesURLLegacy;                           //@synthesize regionalResourcesURLLegacy=_regionalResourcesURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURLLegacy; 
@property (nonatomic,retain) NSString * searchAttributionManifestURLLegacy;                   //@synthesize searchAttributionManifestURLLegacy=_searchAttributionManifestURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsURLLegacy; 
@property (nonatomic,retain) NSString * directionsURLLegacy;                                  //@synthesize directionsURLLegacy=_directionsURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaURLLegacy; 
@property (nonatomic,retain) NSString * etaURLLegacy;                                         //@synthesize etaURLLegacy=_etaURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURLLegacy; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURLLegacy;                        //@synthesize batchReverseGeocoderURLLegacy=_batchReverseGeocoderURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                          //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasResourcesURLLegacy; 
@property (nonatomic,retain) NSString * resourcesURLLegacy;                                   //@synthesize resourcesURLLegacy=_resourcesURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleETAURLLegacy; 
@property (nonatomic,retain) NSString * simpleETAURLLegacy;                                   //@synthesize simpleETAURLLegacy=_simpleETAURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURLLegacy; 
@property (nonatomic,retain) NSString * addressCorrectionInitURLLegacy;                       //@synthesize addressCorrectionInitURLLegacy=_addressCorrectionInitURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURLLegacy; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURLLegacy;                     //@synthesize addressCorrectionUpdateURLLegacy=_addressCorrectionUpdateURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURLLegacy; 
@property (nonatomic,retain) NSString * polyLocationShiftURLLegacy;                           //@synthesize polyLocationShiftURLLegacy=_polyLocationShiftURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemSubmissionURLLegacy; 
@property (nonatomic,retain) NSString * problemSubmissionURLLegacy;                           //@synthesize problemSubmissionURLLegacy=_problemSubmissionURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemStatusURLLegacy; 
@property (nonatomic,retain) NSString * problemStatusURLLegacy;                               //@synthesize problemStatusURLLegacy=_problemStatusURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURLLegacy; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURLLegacy;                     //@synthesize reverseGeocoderVersionsURLLegacy=_reverseGeocoderVersionsURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemCategoriesURLLegacy; 
@property (nonatomic,retain) NSString * problemCategoriesURLLegacy;                           //@synthesize problemCategoriesURLLegacy=_problemCategoriesURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnouncementsURLLegacy; 
@property (nonatomic,retain) NSString * announcementsURLLegacy;                               //@synthesize announcementsURLLegacy=_announcementsURLLegacy - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages;                //@synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDispatcherURLLegacy; 
@property (nonatomic,retain) NSString * dispatcherURLLegacy;                                  //@synthesize dispatcherURLLegacy=_dispatcherURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemOptInURLLegacy; 
@property (nonatomic,retain) NSString * problemOptInURLLegacy;                                //@synthesize problemOptInURLLegacy=_problemOptInURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest;                            //@synthesize versionManifest=_versionManifest - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                                    //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                            //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                                       //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                               //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                                          //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                                  //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                  //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                           //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                                   //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) BOOL hasAbExperimentURLLegacy; 
@property (nonatomic,retain) NSString * abExperimentURLLegacy;                                //@synthesize abExperimentURLLegacy=_abExperimentURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURLLegacy; 
@property (nonatomic,retain) NSString * businessPortalBaseURLLegacy;                          //@synthesize businessPortalBaseURLLegacy=_businessPortalBaseURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasLogMessageUsageURLLegacy; 
@property (nonatomic,retain) NSString * logMessageUsageURLLegacy;                             //@synthesize logMessageUsageURLLegacy=_logMessageUsageURLLegacy - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions;                    //@synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions - In the implementation block
@property (assign,nonatomic) BOOL hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion;                                   //@synthesize locationShiftVersion=_locationShiftVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* hybridUnavailableRegions; 
@property (nonatomic,readonly) BOOL hasReserved; 
@property (nonatomic,retain) NSData * reserved;                                               //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialLookupURLLegacy; 
@property (nonatomic,retain) NSString * spatialLookupURLLegacy;                               //@synthesize spatialLookupURLLegacy=_spatialLookupURLLegacy - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeResources;                                //@synthesize activeResources=_activeResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResources;                              //@synthesize regionalResources=_regionalResources - In the implementation block
@property (assign,nonatomic) BOOL hasModelVersion; 
@property (assign,nonatomic) unsigned modelVersion;                                           //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long activeScalesCount; 
@property (nonatomic,readonly) int* activeScales; 
@property (nonatomic,readonly) unsigned long long activeScenariosCount; 
@property (nonatomic,readonly) int* activeScenarios; 
@property (nonatomic,retain) NSMutableArray * staleResources;                                 //@synthesize staleResources=_staleResources - In the implementation block
@property (nonatomic,readonly) BOOL hasDataSet; 
@property (nonatomic,retain) GEODataSetDescription * dataSet;                                 //@synthesize dataSet=_dataSet - In the implementation block
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeURLLegacy; 
@property (nonatomic,retain) NSString * realtimeTrafficProbeURLLegacy;                        //@synthesize realtimeTrafficProbeURLLegacy=_realtimeTrafficProbeURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeURLLegacy; 
@property (nonatomic,retain) NSString * batchTrafficProbeURLLegacy;                           //@synthesize batchTrafficProbeURLLegacy=_batchTrafficProbeURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasLogMessageUsageV3URLLegacy; 
@property (nonatomic,retain) NSString * logMessageUsageV3URLLegacy;                           //@synthesize logMessageUsageV3URLLegacy=_logMessageUsageV3URLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasProactiveRoutingURLLegacy; 
@property (nonatomic,retain) NSString * proactiveRoutingURLLegacy;                            //@synthesize proactiveRoutingURLLegacy=_proactiveRoutingURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundDispatcherURLLegacy; 
@property (nonatomic,retain) NSString * backgroundDispatcherURLLegacy;                        //@synthesize backgroundDispatcherURLLegacy=_backgroundDispatcherURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBluePOIURLLegacy; 
@property (nonatomic,retain) NSString * bluePOIURLLegacy;                                     //@synthesize bluePOIURLLegacy=_bluePOIURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundRevGeoURLLegacy; 
@property (nonatomic,retain) NSString * backgroundRevGeoURLLegacy;                            //@synthesize backgroundRevGeoURLLegacy=_backgroundRevGeoURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeURLLegacy; 
@property (nonatomic,retain) NSString * wifiConnectionQualityProbeURLLegacy;                  //@synthesize wifiConnectionQualityProbeURLLegacy=_wifiConnectionQualityProbeURLLegacy - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyoverRegionVersions; 
@property (nonatomic,retain) NSData * flyoverRegionVersions;                                  //@synthesize flyoverRegionVersions=_flyoverRegionVersions - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlInfoSet; 
@property (nonatomic,retain) GEOURLInfoSet * urlInfoSet;                                      //@synthesize urlInfoSet=_urlInfoSet - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributionType;
+(Class)resourceType;
+(Class)tileSetType;
+(Class)staleResourceType;
+(Class)styleSheetType;
+(Class)textureType;
+(Class)fontType;
+(Class)iconType;
+(Class)regionalResourceType;
+(Class)xmlType;
+(Class)styleSheetChecksumType;
+(Class)textureChecksumType;
+(Class)fontChecksumType;
+(Class)iconChecksumType;
+(Class)xmlChecksumType;
+(Class)announcementsSupportedLanguagesType;
+(Class)locationShiftEnabledRegionType;
+(Class)regionalResourceTileType;
+(Class)regionalResourceRegionType;
+(Class)activeResourceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(void)iterateActiveTileSets:(/*^block*/id)arg1 ;
-(void)addStaleResource:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(id)activeTileSetForTileType:(int)arg1 scale:(int)arg2 ;
-(void)addResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tileSets;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(void)setDataSet:(GEODataSetDescription *)arg1 ;
-(BOOL)hasDataSet;
-(GEODataSetDescription *)dataSet;
-(id)regionalResourceKeysForTileKey:(const GEOTileKey*)arg1 scale:(int)arg2 scenarios:(id)arg3 ;
-(unsigned)locationShiftVersion;
-(NSMutableArray *)locationShiftEnabledRegions;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(int*)activeScales;
-(int*)activeScenarios;
-(BOOL)hasFlyoverRegionVersions;
-(NSData *)flyoverRegionVersions;
-(id)_decodedFlyoverRegionVersions;
-(void)enumerateFlyoverRegions:(/*^block*/id)arg1 ;
-(unsigned)versionForFlyoverRegion:(unsigned)arg1 ;
-(BOOL)hasDataVersionForFlyoverRegion:(unsigned)arg1 ;
-(unsigned)dataVersionForFlyoverRegion:(unsigned)arg1 ;
-(void)_setDecodedFlyoverRegionVersions:(id)arg1 ;
-(unsigned long long)staleResourcesCount;
-(void)clearStaleResources;
-(id)staleResourceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)staleResources;
-(void)setStaleResources:(NSMutableArray *)arg1 ;
-(void)setActiveResources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activeResources;
-(void)addStyleSheet:(id)arg1 ;
-(void)addTexture:(id)arg1 ;
-(void)addFont:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addRegionalResource:(id)arg1 ;
-(void)addXml:(id)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(void)addTextureChecksum:(id)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(void)addXmlChecksum:(id)arg1 ;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(unsigned long long)styleSheetsCount;
-(void)clearStyleSheets;
-(id)styleSheetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)texturesCount;
-(void)clearTextures;
-(id)textureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontsCount;
-(void)clearFonts;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourcesCount;
-(void)clearRegionalResources;
-(id)regionalResourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)xmlsCount;
-(void)clearXmls;
-(id)xmlAtIndex:(unsigned long long)arg1 ;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(unsigned long long)styleSheetChecksumsCount;
-(void)clearStyleSheetChecksums;
-(id)styleSheetChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)textureChecksumsCount;
-(void)clearTextureChecksums;
-(id)textureChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontChecksumsCount;
-(void)clearFontChecksums;
-(id)fontChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)xmlChecksumsCount;
-(void)clearXmlChecksums;
-(id)xmlChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)announcementsSupportedLanguagesCount;
-(void)clearAnnouncementsSupportedLanguages;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(unsigned long long)locationShiftEnabledRegionsCount;
-(void)clearLocationShiftEnabledRegions;
-(id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasReleaseInfo;
-(BOOL)hasVersionManifest;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(void)setHasLocationShiftVersion:(BOOL)arg1 ;
-(BOOL)hasLocationShiftVersion;
-(NSMutableArray *)styleSheets;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)textures;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fonts;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)regionalResources;
-(void)setRegionalResources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)xmls;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(NSString *)releaseInfo;
-(NSMutableArray *)styleSheetChecksums;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)textureChecksums;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fontChecksums;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)iconChecksums;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)xmlChecksums;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)announcementsSupportedLanguages;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(GEOVersionManifest *)versionManifest;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(void)clearHybridUnavailableRegions;
-(unsigned long long)hybridUnavailableRegionsCount;
-(GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(void)addHybridUnavailableRegion:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)hybridUnavailableRegions;
-(void)setHybridUnavailableRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)_resetBestLanguages;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(id)localizationURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(unsigned long long)activeResourcesCount;
-(void)setFlyoverRegionVersions:(NSData *)arg1 ;
-(id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(BOOL)isHybridModeAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)hasRegionalResourcesForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)largestRegionalResourceZoomLevelContainingTileKey:(const GEOTileKey*)arg1 ;
-(id)regionalResourcesForMapRect:(SCD_Struct_GE44)arg1 ;
-(void)setModelVersion:(unsigned)arg1 ;
-(void)setReserved:(NSData *)arg1 ;
-(void)addActiveScale:(int)arg1 ;
-(void)addActiveScenario:(int)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)populateLegacyFormat;
-(unsigned)modelVersion;
-(unsigned long long)activeScalesCount;
-(int)activeScaleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activeScenariosCount;
-(int)activeScenarioAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)addRegionalResourceTile:(id)arg1 ;
-(void)addRegionalResourceRegion:(id)arg1 ;
-(void)addActiveResource:(id)arg1 ;
-(unsigned long long)regionalResourceTilesCount;
-(void)clearRegionalResourceTiles;
-(id)regionalResourceTileAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourceRegionsCount;
-(void)clearRegionalResourceRegions;
-(id)regionalResourceRegionAtIndex:(unsigned long long)arg1 ;
-(void)setRegionalResourcesURLLegacy:(NSString *)arg1 ;
-(void)setSearchAttributionManifestURLLegacy:(NSString *)arg1 ;
-(void)setDirectionsURLLegacy:(NSString *)arg1 ;
-(void)setEtaURLLegacy:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURLLegacy:(NSString *)arg1 ;
-(void)setResourcesURLLegacy:(NSString *)arg1 ;
-(void)setSimpleETAURLLegacy:(NSString *)arg1 ;
-(void)setAddressCorrectionInitURLLegacy:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURLLegacy:(NSString *)arg1 ;
-(void)setPolyLocationShiftURLLegacy:(NSString *)arg1 ;
-(void)setProblemSubmissionURLLegacy:(NSString *)arg1 ;
-(void)setProblemStatusURLLegacy:(NSString *)arg1 ;
-(void)setReverseGeocoderVersionsURLLegacy:(NSString *)arg1 ;
-(void)setProblemCategoriesURLLegacy:(NSString *)arg1 ;
-(void)setAnnouncementsURLLegacy:(NSString *)arg1 ;
-(void)setDispatcherURLLegacy:(NSString *)arg1 ;
-(void)setProblemOptInURLLegacy:(NSString *)arg1 ;
-(void)setAbExperimentURLLegacy:(NSString *)arg1 ;
-(void)setBusinessPortalBaseURLLegacy:(NSString *)arg1 ;
-(void)setLogMessageUsageURLLegacy:(NSString *)arg1 ;
-(void)setSpatialLookupURLLegacy:(NSString *)arg1 ;
-(void)clearActiveResources;
-(id)activeResourceAtIndex:(unsigned long long)arg1 ;
-(void)clearActiveScales;
-(void)clearActiveScenarios;
-(void)setRealtimeTrafficProbeURLLegacy:(NSString *)arg1 ;
-(void)setBatchTrafficProbeURLLegacy:(NSString *)arg1 ;
-(void)setLogMessageUsageV3URLLegacy:(NSString *)arg1 ;
-(void)setProactiveRoutingURLLegacy:(NSString *)arg1 ;
-(void)setBackgroundDispatcherURLLegacy:(NSString *)arg1 ;
-(void)setBluePOIURLLegacy:(NSString *)arg1 ;
-(void)setBackgroundRevGeoURLLegacy:(NSString *)arg1 ;
-(void)setWifiConnectionQualityProbeURLLegacy:(NSString *)arg1 ;
-(void)setUrlInfoSet:(GEOURLInfoSet *)arg1 ;
-(BOOL)hasRegionalResourcesURLLegacy;
-(BOOL)hasSearchAttributionManifestURLLegacy;
-(BOOL)hasDirectionsURLLegacy;
-(BOOL)hasEtaURLLegacy;
-(BOOL)hasBatchReverseGeocoderURLLegacy;
-(BOOL)hasResourcesURLLegacy;
-(BOOL)hasSimpleETAURLLegacy;
-(BOOL)hasAddressCorrectionInitURLLegacy;
-(BOOL)hasAddressCorrectionUpdateURLLegacy;
-(BOOL)hasPolyLocationShiftURLLegacy;
-(BOOL)hasProblemSubmissionURLLegacy;
-(BOOL)hasProblemStatusURLLegacy;
-(BOOL)hasReverseGeocoderVersionsURLLegacy;
-(BOOL)hasProblemCategoriesURLLegacy;
-(BOOL)hasAnnouncementsURLLegacy;
-(BOOL)hasDispatcherURLLegacy;
-(BOOL)hasProblemOptInURLLegacy;
-(BOOL)hasAbExperimentURLLegacy;
-(BOOL)hasBusinessPortalBaseURLLegacy;
-(BOOL)hasLogMessageUsageURLLegacy;
-(BOOL)hasReserved;
-(BOOL)hasSpatialLookupURLLegacy;
-(void)setHasModelVersion:(BOOL)arg1 ;
-(BOOL)hasModelVersion;
-(void)setActiveScales:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)activeScalesAsString:(int)arg1 ;
-(int)StringAsActiveScales:(id)arg1 ;
-(void)setActiveScenarios:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)activeScenariosAsString:(int)arg1 ;
-(int)StringAsActiveScenarios:(id)arg1 ;
-(BOOL)hasRealtimeTrafficProbeURLLegacy;
-(BOOL)hasBatchTrafficProbeURLLegacy;
-(BOOL)hasLogMessageUsageV3URLLegacy;
-(BOOL)hasProactiveRoutingURLLegacy;
-(BOOL)hasBackgroundDispatcherURLLegacy;
-(BOOL)hasBluePOIURLLegacy;
-(BOOL)hasBackgroundRevGeoURLLegacy;
-(BOOL)hasWifiConnectionQualityProbeURLLegacy;
-(BOOL)hasUrlInfoSet;
-(NSMutableArray *)regionalResourceTiles;
-(void)setRegionalResourceTiles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)regionalResourceRegions;
-(void)setRegionalResourceRegions:(NSMutableArray *)arg1 ;
-(NSString *)regionalResourcesURLLegacy;
-(NSString *)searchAttributionManifestURLLegacy;
-(NSString *)directionsURLLegacy;
-(NSString *)etaURLLegacy;
-(NSString *)batchReverseGeocoderURLLegacy;
-(NSString *)resourcesURLLegacy;
-(NSString *)simpleETAURLLegacy;
-(NSString *)addressCorrectionInitURLLegacy;
-(NSString *)addressCorrectionUpdateURLLegacy;
-(NSString *)polyLocationShiftURLLegacy;
-(NSString *)problemSubmissionURLLegacy;
-(NSString *)problemStatusURLLegacy;
-(NSString *)reverseGeocoderVersionsURLLegacy;
-(NSString *)problemCategoriesURLLegacy;
-(NSString *)announcementsURLLegacy;
-(NSString *)dispatcherURLLegacy;
-(NSString *)problemOptInURLLegacy;
-(NSString *)abExperimentURLLegacy;
-(NSString *)businessPortalBaseURLLegacy;
-(NSString *)logMessageUsageURLLegacy;
-(NSData *)reserved;
-(NSString *)spatialLookupURLLegacy;
-(NSString *)realtimeTrafficProbeURLLegacy;
-(NSString *)batchTrafficProbeURLLegacy;
-(NSString *)logMessageUsageV3URLLegacy;
-(NSString *)proactiveRoutingURLLegacy;
-(NSString *)backgroundDispatcherURLLegacy;
-(NSString *)bluePOIURLLegacy;
-(NSString *)backgroundRevGeoURLLegacy;
-(NSString *)wifiConnectionQualityProbeURLLegacy;
-(GEOURLInfoSet *)urlInfoSet;
-(void)populateRegionalResources:(id)arg1 ;
-(void)clearModernFormatFields;
-(void)dealloc;
-(unsigned)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(NSMutableArray *)icons;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)setIcons:(NSMutableArray *)arg1 ;
@end

