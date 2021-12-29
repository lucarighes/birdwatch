#ifndef org_apache_lucene_search_uhighlight_PhraseHelper_H
#define org_apache_lucene_search_uhighlight_PhraseHelper_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    namespace function {
      class Predicate;
      class Function;
    }
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class String;
    class Boolean;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
        }
        namespace uhighlight {
          class OffsetsEnum;
          class PhraseHelper;
        }
        class Query;
      }
      namespace index {
        class LeafReader;
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

          class PhraseHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa45f19855a9ac86,
              mid_createOffsetsEnumsForSpans_af48ca8156e21201,
              mid_getAllPositionInsensitiveTerms_af55d198d80d9d7e,
              mid_getSpanQueries_7dcf4034c6d1a92a,
              mid_hasPositionSensitivity_8454bd5aa23fd11e,
              mid_willRewrite_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseHelper(const PhraseHelper& obj) : ::java::lang::Object(obj) {}

            static PhraseHelper *NONE;

            PhraseHelper(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Predicate &, const ::java::util::function::Function &, const ::java::util::function::Function &, jboolean);

            void createOffsetsEnumsForSpans(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::util::List &) const;
            JArray< ::org::apache::lucene::util::BytesRef > getAllPositionInsensitiveTerms() const;
            ::java::util::Set getSpanQueries() const;
            jboolean hasPositionSensitivity() const;
            jboolean willRewrite() const;
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
          extern PyType_Def PY_TYPE_DEF(PhraseHelper);
          extern PyTypeObject *PY_TYPE(PhraseHelper);

          class t_PhraseHelper {
          public:
            PyObject_HEAD
            PhraseHelper object;
            static PyObject *wrap_Object(const PhraseHelper&);
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
