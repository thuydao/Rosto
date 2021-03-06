//  Constants.h
//  Created by Engel Alipio on 9/26/14.
//  Copyright (c) 2014 Lush. All rights reserved.
//  TFS Git Test

//Providers

#define kFaceBook       @ "facebook"
#define kTwitter            @ "twitter"
#define kStandard         @ "standard"

#define kOpenTableURL             @"http://opentable.herokuapp.com/api/"
#define kOpenTableStats            @"stats"
#define kOpenTableCities           @"cities"
#define kOpenTableRestaurants @"restaurants"
#define kOpenTableRestaurant   @"restaurants/{id}"

#define kYelpKey         @"vXAPturZx3xLLlpCVciD_g"
#define kYelpSecret      @"spys9MkxrkohQwdiQXCtOb5xQ_U"
#define kYelpToken       @"5d1pogQQXfVoSZik-qZQYYkTJldzNv_l"
#define kYelpTokenSecret @"TzC2IpKhRuRP5zKdGkoKFLr_XlAU"
#define kYelpAuthMethod  @"hmac-sha1"
#define kYelpBaseURL     @"api.yelp.com/v2/"
#define kYelpSearchURL   @"search"


//Notifications
#define kExternalSearchNotifications                          @"OrderMyTableNow.Views.ExternalSearch.Notifications"
#define kFeaturedCitiesNotifications                          @"OrderMyTableNow.Views.FeaturedCities.Notifications"
#define kRestaurantViewLoadedNotifications             @"OrderMyTableNow.Views.Loaded.Notifications"
#define kImageDownloadRestaurantsNotifications     @"OrderMyTableNow.Images.Download.Notification.Restaurants"
#define kKeyboardDisplayNotification                         @"OrderMyTableNow.Views.Keyboard.Show.Notifications"
#define kKeyboardHideNotification                              @"OrderMyTableNow.Views.Keyboard.Hide.Notifications"
/*
 
 Name	Data Type	Required / Optional	Description
 term	string	optional	Search term (e.g. "food", "restaurants"). If term isn’t included we search everything.
 limit	number	optional	Number of business results to return
 offset	number	optional	Offset the list of returned business results by this amount
 sort	number	optional	Sort mode: 0=Best matched (default), 1=Distance, 2=Highest Rated. If the mode is 1 or 2 a search may retrieve an additional 20 businesses past the initial limit of the first 20 results. This is done by specifying an offset and limit of 20. Sort by distance is only supported for a location or geographic search. The rating sort is not strictly sorted by the rating value, but by an adjusted rating value that takes into account the number of ratings, similar to a bayesian average. This is so a business with 1 rating of 5 stars doesn’t immediately jump to the top.
 category_filter	string	optional	Category to filter search results with. See the list of supported categories. The category filter can be a list of comma delimited categories. For example, 'bars,french' will filter by Bars and French. The category identifier should be used (for example 'discgolf', not 'Disc Golf').
 radius_filter	number	optional	Search radius in meters. If the value is too large, a AREA_TOO_LARGE error may be returned. The max value is 40000 meters (25 miles).
 deals_filter	bool	optional	Whether to exclusively search for businesses with deals
 
 */

//Loading Indicator messages

#define kLoading @ "Loading..."
#define kSaving @ "Saving..."
#define kDeleting @"Deleting..."

// Buttons

#define kSave   @"Save"
#define kEdit   @"Edit"
#define kCancel @"Cancel"
#define kDelete @"Delete"
#define kDone   @"Done"
#define kReset  @"Reset"

// Hex Colors Codes

#define kHexBlueColor @"003366"

//Form Fields
#define kComments @ "Comments"
#define kStatus @"Status"
#define kAssignedTo @ "Assigned To"
#define kDueDate @ "Due Date"
#define kEmailFollowUpReminder @ "Email Follow Up Reminder"
#define kCreatedBy @ "Created By"
#define kCreatedDate @ "Created Date"
#define kEditComments @"Edit Comments"

//Action Form Fields

#define kEditActionTitle @ "Edit Action"
#define kAddActionTitle @ "Add %@ Action"
#define kAssignToSelf @ "Assign to self"
#define kAssignedTo @ "Assigned To"
#define kAssignTo @ "Assign To"
#define kActionCompleted @ "Action Completed"
#define kActionType @ "Action Type"
#define kActionDescription @ "Action Description"
#define kFollowUp @"Follow Up"

#define kFavorites @"Favorites"
#define kFavoriteCity @"FavoriteCity"
#define kFavoriteRestaurants @"FavoriteRestaurants"
#define kPaymentMethod @"PaymentMethod"

#define kYelpBusinessURL @"business/{id}"

#define kParseAppId     @"Y7cCeknzsMNuPYJglvuy0PTB8658BtOLNQkhWsH5"
#define kParseKey       @"ySs7KAjuCDp89a8I5XXflqXxcVGkdM1uQOS08G8I"
#define kParseAPIKey    @"2j8WbhpRwwGR7dXGN2WGry2mHrGQbogoD7Gekz3t"
#define kParseMasterKey @"Ck5P5EynWch0mnWHdCX7fLCaFkYZD9vmNPW8cxRd"

#define kThorKey        @ "B90ueLiQUqaj2pmRUASMxBacZ3vivzr9"  
#define kThorSecret     @ "UIhRGUoeVlFzsA10"
#define kThorBaseURL    @ "https://ethor-test.apigee.net/v1/"
#define kChainFields    @ "id%2Cname%2Cwebsite%2Clogo%2Clink"

#define kThorGetChains         @ "chains"
#define kThorGetChainOrders    @ "chains/{id}/orders"
#define kThorGetChain          @ "chains/{id}"
#define kThorGetChainStores    @ "chains/{id}/stores"
#define kThorGetChainStore     @ "chains/{id}/stores/{store_id}"
#define kThorGetChainCustomers @ "chains/{id}/customers"
#define kThorGetChainCustomer  @ "chains/{id}/customers/{customer_id}"

#define kThorTestChain  @"YCJC0YLTNG"
#define kThorMaxCount   @"100"
#define kAllDigits @"1234567890"

#define kItemViewPortrait @"ItemViewController"
#define kItemViewLandscape @"ItemViewController"
#define kItemViewiPhone6PlusPortrait @"ItemViewController_6Plus"
#define kItemViewPortrait_iPad @"ItemViewController_iPad"

#define kSpanDiameter 0.10f
#define kSpanRadius   1500
#define kDefaultTableCellHeight 44;
#define kTableCellMapHeight 220;
#define kTableCellImageHeight 220;
#define kDefaultImageWidth 120;

#define kImageDimension @"50"
#define kImageStoreDimension @"32"
#define kUserPin        @"MePin.png"
#define kStorePin       @"Pin.png"

#define kFakeUserLocation NO
#define kFakeUserLongitude -114.062981
#define kFakeUserLatitude  51.054319

#define kMeter 1609.344f
#define kMile  0.000621371192f

#define kTintColor @"13658F"

#define kOrderTabItemIndex 1
#define kAnimationSpeed 0.85f
