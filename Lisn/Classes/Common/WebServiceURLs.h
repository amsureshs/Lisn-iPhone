//
//  WebServiceURLs.h
//  PINKCampusRep
//
//  Created by IOT on 3/4/16.
//  Copyright © 2016 IronOneTech. All rights reserved.
//

#ifndef WebServiceURLs_h
#define WebServiceURLs_h

static NSString * const top_release_book_list_url = @"https://app.lisn.audio/api/1.4/homebooklist.php";
static NSString * const top_rated_book_list_url = @"https://app.lisn.audio/api/1.4/topratedbooklist.php";
static NSString * const top_download_book_list_url = @"https://app.lisn.audio/api/1.4/topdownloadedbooklist.php";
static NSString * const user_book_list_url = @"https://app.lisn.audio/api/1.4/userbooklist.php";
static NSString * const book_info_url = @"https://app.lisn.audio/api/1.4/bookinfo.php";
static NSString * const user_add_url = @"https://app.lisn.audio/api/1.4/adduser.php";
static NSString * const forget_password_url = @"https://app.lisn.audio/api/1.4/forgotpassword.php";
static NSString * const user_login_url = @"https://app.lisn.audio/api/1.4/login.php";
static NSString * const user_download_activity_url = @"http://app.lisn.audio/api/1.4/downloadactivity.php";
static NSString * const search_book_url = @"https://app.lisn.audio/api/1.4/searchedbooklist.php";
static NSString * const book_category_list_url = @"https://app.lisn.audio/api/1.4/categorylist.php";

static NSString * const book_category_url =@"https://app.lisn.audio/api/1.4/categorybooklist.php";
static NSString * const book_download_url =@"https://app.lisn.audio/api/1.4/download.php";
static NSString * const add_review_url =@"https://app.lisn.audio/api/1.4/reviewactivity.php";
static NSString * const verify_user_url =@"https://app.lisn.audio/api/1.4/verifyuser.php";
static NSString * const user_feedback_url =@"https://app.lisn.audio/api/1.4/feedbackactivity.php";
static NSString * const update_mobile_no_url =@"https://app.lisn.audio/api/1.4/updatemobile.php";

static NSString * const purchase_book_url =@"https://app.lisn.audio/spgw/1.5.6/payment/init.php";
static NSString * const purchase_success_url =@"https://app.lisn.audio/spgw/1.5.6/payment/success.php";
static NSString * const purchase_success_url_http =@"http://app.lisn.audio/spgw/1.5.6/payment/success.php";
static NSString * const purchase_failed_url =@"https://app.lisn.audio/spgw/1.5.6/payment/failed.php";
static NSString * const purchase_failed_url_http =@"http://app.lisn.audio/spgw/1.5.6/payment/failed.php";
static NSString * const purchase_already_url =@"https://app.lisn.audio/spgw/1.5.6/payment/alreadypaid.php";
static NSString * const purchase_already_url_http =@"http://app.lisn.audio/spgw/1.5.6/payment/alreadypaid.php";
static NSString * const play_store_url =@"https://play.google.com/store/apps/details?id=audio.lisn";
static NSString * const mobitel_pay_url =@"http://app.lisn.audio/cbgw/1.1/mobitel.php";
static NSString * const etisalat_pay_url =@"http://app.lisn.audio/cbgw/1.1/etisalat.php";
static NSString * const dialog_pay_url =@"http://app.lisn.audio/cbgw/1.1/dialog.php";
static NSString * const support_url =@"info@lisn.audio";
static NSString * const mconnect_url =@"https://mconnect.dialog.lk/openidconnect/authorize";

#endif /* WebServiceURLs_h */
