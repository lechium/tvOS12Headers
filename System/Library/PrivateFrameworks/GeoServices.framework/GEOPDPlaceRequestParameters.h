/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAddressObjectGeocodingParameters, GEOPDAutocompleteParameters, GEOPDBatchPopularNearbySearchParameters, GEOPDBatchSpatialLookupParameters, GEOPDBrandLookupParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDCanonicalLocationSearchParameters, GEOPDCategorySearchParameters, GEOPDClusterGeocodingParameters, GEOPDExternalTransitLookupParameters, GEOPDFeatureIdGeocodingParameters, GEOPDGeocodingParameters, GEOPDIpGeoLookupParameters, GEOPDLocationDirectedSearchParameters, GEOPDMapsIdentifierPlaceLookupParameters, GEOPDMerchantLookupParameters, GEOPDNearbySearchParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDPopularNearbySearchParameters, GEOPDReverseGeocodingParameters, GEOPDSearchFieldPlaceholderParameters, GEOPDSearchParameters, GEOPDSearchZeroKeywordCategorySuggestionParameters, GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters, GEOPDSiriSearchParameters, GEOPDVendorSpecificPlaceRefinementParameters, GEOPDWifiFingerprintParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAddressObjectGeocodingParameters* _addressObjectGeocodingParameters;
	GEOPDAutocompleteParameters* _autocompleteParameters;
	GEOPDBatchPopularNearbySearchParameters* _batchPopularNearbySearchParameters;
	GEOPDBatchSpatialLookupParameters* _batchSpatialLookupParameters;
	GEOPDBrandLookupParameters* _brandLookupParameters;
	GEOPDSearchBrowseCategorySuggestionParameters* _browseCategorySuggestionParameters;
	GEOPDCanonicalLocationSearchParameters* _canonicalLocationSearchParameters;
	GEOPDCategorySearchParameters* _categorySearchParameters;
	GEOPDClusterGeocodingParameters* _clusterGeocodingParameters;
	GEOPDExternalTransitLookupParameters* _externalTransitLookupParameters;
	GEOPDFeatureIdGeocodingParameters* _featureIdGeocodingParameters;
	GEOPDGeocodingParameters* _geocodingParameters;
	GEOPDIpGeoLookupParameters* _ipGeoLookupParameters;
	GEOPDLocationDirectedSearchParameters* _locationDirectedSearchParameters;
	GEOPDMapsIdentifierPlaceLookupParameters* _mapsIdentifierPlaceLookupParameters;
	GEOPDMerchantLookupParameters* _merchantLookupParameters;
	GEOPDNearbySearchParameters* _nearbySearchParameters;
	GEOPDPlaceLookupParameters* _placeLookupParameters;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	GEOPDPopularNearbySearchParameters* _popularNearbySearchParameters;
	GEOPDReverseGeocodingParameters* _reverseGeocodingParameters;
	GEOPDSearchFieldPlaceholderParameters* _searchFieldPlaceholderParameters;
	GEOPDSearchParameters* _searchParameters;
	GEOPDSearchZeroKeywordCategorySuggestionParameters* _searchZeroKeywordCategorySuggestionParameters;
	GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters* _searchZeroKeywordWithSearchResultsSuggestionParameters;
	GEOPDSiriSearchParameters* _siriSearchParameters;
	GEOPDVendorSpecificPlaceRefinementParameters* _vendorSpecificPlaceRefinementParameters;
	GEOPDWifiFingerprintParameters* _wifiFingerprintParameters;

}

@property (nonatomic,readonly) BOOL hasSearchParameters; 
@property (nonatomic,retain) GEOPDSearchParameters * searchParameters;                                                                                          //@synthesize searchParameters=_searchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasGeocodingParameters; 
@property (nonatomic,retain) GEOPDGeocodingParameters * geocodingParameters;                                                                                    //@synthesize geocodingParameters=_geocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasCanonicalLocationSearchParameters; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchParameters * canonicalLocationSearchParameters;                                                        //@synthesize canonicalLocationSearchParameters=_canonicalLocationSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocodingParameters; 
@property (nonatomic,retain) GEOPDReverseGeocodingParameters * reverseGeocodingParameters;                                                                      //@synthesize reverseGeocodingParameters=_reverseGeocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceLookupParameters; 
@property (nonatomic,retain) GEOPDPlaceLookupParameters * placeLookupParameters;                                                                                //@synthesize placeLookupParameters=_placeLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantLookupParameters; 
@property (nonatomic,retain) GEOPDMerchantLookupParameters * merchantLookupParameters;                                                                          //@synthesize merchantLookupParameters=_merchantLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;                                                                        //@synthesize placeRefinementParameters=_placeRefinementParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSiriSearchParameters; 
@property (nonatomic,retain) GEOPDSiriSearchParameters * siriSearchParameters;                                                                                  //@synthesize siriSearchParameters=_siriSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationDirectedSearchParameters; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchParameters * locationDirectedSearchParameters;                                                          //@synthesize locationDirectedSearchParameters=_locationDirectedSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteParameters; 
@property (nonatomic,retain) GEOPDAutocompleteParameters * autocompleteParameters;                                                                              //@synthesize autocompleteParameters=_autocompleteParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionParameters * browseCategorySuggestionParameters;                                                //@synthesize browseCategorySuggestionParameters=_browseCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasCategorySearchParameters; 
@property (nonatomic,retain) GEOPDCategorySearchParameters * categorySearchParameters;                                                                          //@synthesize categorySearchParameters=_categorySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDPopularNearbySearchParameters * popularNearbySearchParameters;                                                                //@synthesize popularNearbySearchParameters=_popularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionParameters * searchZeroKeywordCategorySuggestionParameters;                                //@synthesize searchZeroKeywordCategorySuggestionParameters=_searchZeroKeywordCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchFieldPlaceholderParameters; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderParameters * searchFieldPlaceholderParameters;                                                          //@synthesize searchFieldPlaceholderParameters=_searchFieldPlaceholderParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchParameters * batchPopularNearbySearchParameters;                                                      //@synthesize batchPopularNearbySearchParameters=_batchPopularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorSpecificPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementParameters * vendorSpecificPlaceRefinementParameters;                                            //@synthesize vendorSpecificPlaceRefinementParameters=_vendorSpecificPlaceRefinementParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasNearbySearchParameters; 
@property (nonatomic,retain) GEOPDNearbySearchParameters * nearbySearchParameters;                                                                              //@synthesize nearbySearchParameters=_nearbySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObjectGeocodingParameters; 
@property (nonatomic,retain) GEOPDAddressObjectGeocodingParameters * addressObjectGeocodingParameters;                                                          //@synthesize addressObjectGeocodingParameters=_addressObjectGeocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordWithSearchResultsSuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters * searchZeroKeywordWithSearchResultsSuggestionParameters;              //@synthesize searchZeroKeywordWithSearchResultsSuggestionParameters=_searchZeroKeywordWithSearchResultsSuggestionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalTransitLookupParameters; 
@property (nonatomic,retain) GEOPDExternalTransitLookupParameters * externalTransitLookupParameters;                                                            //@synthesize externalTransitLookupParameters=_externalTransitLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureIdGeocodingParameters; 
@property (nonatomic,retain) GEOPDFeatureIdGeocodingParameters * featureIdGeocodingParameters;                                                                  //@synthesize featureIdGeocodingParameters=_featureIdGeocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsIdentifierPlaceLookupParameters; 
@property (nonatomic,retain) GEOPDMapsIdentifierPlaceLookupParameters * mapsIdentifierPlaceLookupParameters;                                                    //@synthesize mapsIdentifierPlaceLookupParameters=_mapsIdentifierPlaceLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterGeocodingParameters; 
@property (nonatomic,retain) GEOPDClusterGeocodingParameters * clusterGeocodingParameters;                                                                      //@synthesize clusterGeocodingParameters=_clusterGeocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBrandLookupParameters; 
@property (nonatomic,retain) GEOPDBrandLookupParameters * brandLookupParameters;                                                                                //@synthesize brandLookupParameters=_brandLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiFingerprintParameters; 
@property (nonatomic,retain) GEOPDWifiFingerprintParameters * wifiFingerprintParameters;                                                                        //@synthesize wifiFingerprintParameters=_wifiFingerprintParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasIpGeoLookupParameters; 
@property (nonatomic,retain) GEOPDIpGeoLookupParameters * ipGeoLookupParameters;                                                                                //@synthesize ipGeoLookupParameters=_ipGeoLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchSpatialLookupParameters; 
@property (nonatomic,retain) GEOPDBatchSpatialLookupParameters * batchSpatialLookupParameters;                                                                  //@synthesize batchSpatialLookupParameters=_batchSpatialLookupParameters - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDExternalTransitLookupParameters *)externalTransitLookupParameters;
-(GEOPDReverseGeocodingParameters *)reverseGeocodingParameters;
-(BOOL)hasSearchParameters;
-(GEOPDSearchParameters *)searchParameters;
-(BOOL)hasPlaceRefinementParameters;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(BOOL)hasVendorSpecificPlaceRefinementParameters;
-(GEOPDVendorSpecificPlaceRefinementParameters *)vendorSpecificPlaceRefinementParameters;
-(BOOL)hasLocationDirectedSearchParameters;
-(GEOPDLocationDirectedSearchParameters *)locationDirectedSearchParameters;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE30)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(BOOL)hasClusterGeocodingParameters;
-(GEOPDClusterGeocodingParameters *)clusterGeocodingParameters;
-(BOOL)hasExternalTransitLookupParameters;
-(BOOL)hasFeatureIdGeocodingParameters;
-(GEOPDFeatureIdGeocodingParameters *)featureIdGeocodingParameters;
-(BOOL)hasMerchantLookupParameters;
-(GEOPDMerchantLookupParameters *)merchantLookupParameters;
-(BOOL)hasReverseGeocodingParameters;
-(BOOL)hasSearchZeroKeywordCategorySuggestionParameters;
-(GEOPDSearchZeroKeywordCategorySuggestionParameters *)searchZeroKeywordCategorySuggestionParameters;
-(void)setSearchParameters:(GEOPDSearchParameters *)arg1 ;
-(void)setGeocodingParameters:(GEOPDGeocodingParameters *)arg1 ;
-(void)setCanonicalLocationSearchParameters:(GEOPDCanonicalLocationSearchParameters *)arg1 ;
-(void)setReverseGeocodingParameters:(GEOPDReverseGeocodingParameters *)arg1 ;
-(void)setPlaceLookupParameters:(GEOPDPlaceLookupParameters *)arg1 ;
-(void)setMerchantLookupParameters:(GEOPDMerchantLookupParameters *)arg1 ;
-(void)setSiriSearchParameters:(GEOPDSiriSearchParameters *)arg1 ;
-(void)setLocationDirectedSearchParameters:(GEOPDLocationDirectedSearchParameters *)arg1 ;
-(void)setAutocompleteParameters:(GEOPDAutocompleteParameters *)arg1 ;
-(void)setBrowseCategorySuggestionParameters:(GEOPDSearchBrowseCategorySuggestionParameters *)arg1 ;
-(void)setCategorySearchParameters:(GEOPDCategorySearchParameters *)arg1 ;
-(void)setPopularNearbySearchParameters:(GEOPDPopularNearbySearchParameters *)arg1 ;
-(void)setSearchZeroKeywordCategorySuggestionParameters:(GEOPDSearchZeroKeywordCategorySuggestionParameters *)arg1 ;
-(void)setSearchFieldPlaceholderParameters:(GEOPDSearchFieldPlaceholderParameters *)arg1 ;
-(void)setBatchPopularNearbySearchParameters:(GEOPDBatchPopularNearbySearchParameters *)arg1 ;
-(void)setVendorSpecificPlaceRefinementParameters:(GEOPDVendorSpecificPlaceRefinementParameters *)arg1 ;
-(void)setNearbySearchParameters:(GEOPDNearbySearchParameters *)arg1 ;
-(void)setAddressObjectGeocodingParameters:(GEOPDAddressObjectGeocodingParameters *)arg1 ;
-(void)setSearchZeroKeywordWithSearchResultsSuggestionParameters:(GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *)arg1 ;
-(void)setExternalTransitLookupParameters:(GEOPDExternalTransitLookupParameters *)arg1 ;
-(void)setFeatureIdGeocodingParameters:(GEOPDFeatureIdGeocodingParameters *)arg1 ;
-(void)setMapsIdentifierPlaceLookupParameters:(GEOPDMapsIdentifierPlaceLookupParameters *)arg1 ;
-(void)setClusterGeocodingParameters:(GEOPDClusterGeocodingParameters *)arg1 ;
-(void)setBrandLookupParameters:(GEOPDBrandLookupParameters *)arg1 ;
-(void)setWifiFingerprintParameters:(GEOPDWifiFingerprintParameters *)arg1 ;
-(void)setIpGeoLookupParameters:(GEOPDIpGeoLookupParameters *)arg1 ;
-(void)setBatchSpatialLookupParameters:(GEOPDBatchSpatialLookupParameters *)arg1 ;
-(BOOL)hasGeocodingParameters;
-(BOOL)hasCanonicalLocationSearchParameters;
-(BOOL)hasPlaceLookupParameters;
-(BOOL)hasSiriSearchParameters;
-(BOOL)hasAutocompleteParameters;
-(BOOL)hasBrowseCategorySuggestionParameters;
-(BOOL)hasCategorySearchParameters;
-(BOOL)hasPopularNearbySearchParameters;
-(BOOL)hasSearchFieldPlaceholderParameters;
-(BOOL)hasBatchPopularNearbySearchParameters;
-(BOOL)hasNearbySearchParameters;
-(BOOL)hasAddressObjectGeocodingParameters;
-(BOOL)hasSearchZeroKeywordWithSearchResultsSuggestionParameters;
-(BOOL)hasMapsIdentifierPlaceLookupParameters;
-(BOOL)hasBrandLookupParameters;
-(BOOL)hasWifiFingerprintParameters;
-(BOOL)hasIpGeoLookupParameters;
-(BOOL)hasBatchSpatialLookupParameters;
-(GEOPDGeocodingParameters *)geocodingParameters;
-(GEOPDCanonicalLocationSearchParameters *)canonicalLocationSearchParameters;
-(GEOPDPlaceLookupParameters *)placeLookupParameters;
-(GEOPDSiriSearchParameters *)siriSearchParameters;
-(GEOPDAutocompleteParameters *)autocompleteParameters;
-(GEOPDSearchBrowseCategorySuggestionParameters *)browseCategorySuggestionParameters;
-(GEOPDCategorySearchParameters *)categorySearchParameters;
-(GEOPDPopularNearbySearchParameters *)popularNearbySearchParameters;
-(GEOPDSearchFieldPlaceholderParameters *)searchFieldPlaceholderParameters;
-(GEOPDBatchPopularNearbySearchParameters *)batchPopularNearbySearchParameters;
-(GEOPDNearbySearchParameters *)nearbySearchParameters;
-(GEOPDAddressObjectGeocodingParameters *)addressObjectGeocodingParameters;
-(GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *)searchZeroKeywordWithSearchResultsSuggestionParameters;
-(GEOPDMapsIdentifierPlaceLookupParameters *)mapsIdentifierPlaceLookupParameters;
-(GEOPDBrandLookupParameters *)brandLookupParameters;
-(GEOPDWifiFingerprintParameters *)wifiFingerprintParameters;
-(GEOPDIpGeoLookupParameters *)ipGeoLookupParameters;
-(GEOPDBatchSpatialLookupParameters *)batchSpatialLookupParameters;
-(void)clearLocations;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE30)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE30)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE30)arg1 preserveOriginalLocation:(BOOL)arg2 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE30)arg1 preserveOriginalLocation:(BOOL)arg2 floorOrdinal:(int)arg3 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE30)arg2 traits:(id)arg3 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 ;
-(id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE30)arg1 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

