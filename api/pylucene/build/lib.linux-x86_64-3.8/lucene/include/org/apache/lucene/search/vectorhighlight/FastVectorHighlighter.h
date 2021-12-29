#ifndef org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H
#define org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FragmentsBuilder;
          class FieldQuery;
          class FragListBuilder;
        }
        namespace highlight {
          class Encoder;
        }
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FastVectorHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_33bb9a5a88dc139c,
              mid_init$_9d85824f544ac283,
              mid_getBestFragment_30df0a0ebbe0fc55,
              mid_getBestFragment_42ab1c819ee339a7,
              mid_getBestFragments_4ca2d2f115f03123,
              mid_getBestFragments_e8c124dbd009da1a,
              mid_getBestFragments_186450ed17104b68,
              mid_getFieldQuery_7ca98dc21b4f1d39,
              mid_getFieldQuery_62fcaf9c9d4c2e80,
              mid_getPhraseLimit_9972fcc56b44e79d,
              mid_isFieldMatch_8454bd5aa23fd11e,
              mid_isPhraseHighlight_8454bd5aa23fd11e,
              mid_setPhraseLimit_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastVectorHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastVectorHighlighter(const FastVectorHighlighter& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_FIELD_MATCH;
            static jboolean DEFAULT_PHRASE_HIGHLIGHT;

            FastVectorHighlighter();
            FastVectorHighlighter(jboolean, jboolean);
            FastVectorHighlighter(jboolean, jboolean, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Set &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &) const;
            jint getPhraseLimit() const;
            jboolean isFieldMatch() const;
            jboolean isPhraseHighlight() const;
            void setPhraseLimit(jint) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FastVectorHighlighter);
          extern PyTypeObject *PY_TYPE(FastVectorHighlighter);

          class t_FastVectorHighlighter {
          public:
            PyObject_HEAD
            FastVectorHighlighter object;
            static PyObject *wrap_Object(const FastVectorHighlighter&);
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
