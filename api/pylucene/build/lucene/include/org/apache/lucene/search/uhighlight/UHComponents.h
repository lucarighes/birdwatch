#ifndef org_apache_lucene_search_uhighlight_UHComponents_H
#define org_apache_lucene_search_uhighlight_UHComponents_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$HighlightFlag;
          class LabelledCharArrayMatcher;
          class PhraseHelper;
        }
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class UHComponents : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8bb65025098846e0,
              mid_getAutomata_2453e0754c0b617b,
              mid_getField_db9b55ba01e03e4b,
              mid_getFieldMatcher_9642992f11d82349,
              mid_getHighlightFlags_7dcf4034c6d1a92a,
              mid_getPhraseHelper_5c4612f30cc01bc9,
              mid_getQuery_cbf839a480265450,
              mid_getTerms_af55d198d80d9d7e,
              mid_hasUnrecognizedQueryPart_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UHComponents(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UHComponents(const UHComponents& obj) : ::java::lang::Object(obj) {}

            UHComponents(const ::java::lang::String &, const ::java::util::function::Predicate &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::util::BytesRef > &, const ::org::apache::lucene::search::uhighlight::PhraseHelper &, const JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > &, jboolean, const ::java::util::Set &);

            JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > getAutomata() const;
            ::java::lang::String getField() const;
            ::java::util::function::Predicate getFieldMatcher() const;
            ::java::util::Set getHighlightFlags() const;
            ::org::apache::lucene::search::uhighlight::PhraseHelper getPhraseHelper() const;
            ::org::apache::lucene::search::Query getQuery() const;
            JArray< ::org::apache::lucene::util::BytesRef > getTerms() const;
            jboolean hasUnrecognizedQueryPart() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UHComponents);
          extern PyTypeObject *PY_TYPE(UHComponents);

          class t_UHComponents {
          public:
            PyObject_HEAD
            UHComponents object;
            static PyObject *wrap_Object(const UHComponents&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
